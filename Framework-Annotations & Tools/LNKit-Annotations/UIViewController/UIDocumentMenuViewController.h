/*
 * UIDocumentMenuViewController.h 
 *
 * (c) 2014-2015
 * Framework: UIKit
 *
 * Author: 白开水ln,（https://github.com/CoderLN）
 *
 * Created by 【WechatPublic-Codeidea】 on Elegant programming.
 * Copyright © Reprinted（Blog https://githubidea.github.io）Please indicate the source.Mustbe.
 *
 *
 * 🐾 |Codeidea 用文字记录自己的思想与经验 | 编程 | 职场 | 阅读 | 摄影 | 体验 | 👣
 */


#import <Foundation/Foundation.h>
#import <UIKit/UIViewController.h>
#import <UIKit/UIDocumentPickerViewController.h>

NS_ASSUME_NONNULL_BEGIN

typedef NS_ENUM(NSUInteger, UIDocumentMenuOrder) {
    UIDocumentMenuOrderFirst,
    UIDocumentMenuOrderLast
} NS_ENUM_AVAILABLE_IOS(8_0) __TVOS_PROHIBITED;

__TVOS_PROHIBITED @protocol UIDocumentMenuDelegate <NSObject>

- (void)documentMenu:(UIDocumentMenuViewController *)documentMenu didPickDocumentPicker:(UIDocumentPickerViewController *)documentPicker;
@optional
- (void)documentMenuWasCancelled:(UIDocumentMenuViewController *)documentMenu;

@end

NS_CLASS_AVAILABLE_IOS(8_0) __TVOS_PROHIBITED @interface UIDocumentMenuViewController : UIViewController

- (instancetype)initWithDocumentTypes:(NSArray <NSString *> *)allowedUTIs inMode:(UIDocumentPickerMode)mode NS_DESIGNATED_INITIALIZER;
- (instancetype)initWithURL:(NSURL *)url inMode:(UIDocumentPickerMode)mode NS_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithCoder:(NSCoder *)aDecoder NS_DESIGNATED_INITIALIZER;

- (void)addOptionWithTitle:(NSString *)title image:(nullable UIImage *)image order:(UIDocumentMenuOrder)order handler:(void (^)(void))handler;

@property (nullable, nonatomic, weak) id<UIDocumentMenuDelegate> delegate;

@end

NS_ASSUME_NONNULL_END_START_COPYRIGHT__JIANSHU_BAIKAISHUILN__WechatPublic_Codeidea__END
