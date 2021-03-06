/*
 * UIPopoverBackgroundView.h 
 *
 * (c) 2011-2016
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
#import <UIKit/UIView.h>
#import <UIKit/UIGeometry.h>
#import <UIKit/UIPopoverController.h>

/* The methods defined below are all to be treated as abstract; in order to subclass `UIPopoverBackgroundView`, you must supply implementations of each of the methods below. For `readwrite` properties, you must supply implementations of both of the accessors.
 */

@protocol UIPopoverBackgroundViewMethods
/* Represents the the length of the base of the arrow's triangle in points.
 */
+ (CGFloat)arrowBase;

/* Describes the distance between each edge of the background view and the corresponding edge of its content view (i.e. if it were strictly a rectangle).
 */
+ (UIEdgeInsets)contentViewInsets;

+ (CGFloat)arrowHeight;
@end

NS_CLASS_AVAILABLE_IOS(5_0)
@interface UIPopoverBackgroundView : UIView <UIPopoverBackgroundViewMethods>

/* The arrow offset represents how far from the center of the view the center of the arrow should appear. For `UIPopoverArrowDirectionUp` and `UIPopoverArrowDirectionDown`, this is a left-to-right offset; negative is to the left. For `UIPopoverArrowDirectionLeft` and `UIPopoverArrowDirectionRight`, this is a top-to-bottom offset; negative to toward the top.
 
 This method is called inside an animation block managed by the `UIPopoverController`.
 */
@property (nonatomic, readwrite) CGFloat arrowOffset;

/* `arrowDirection` manages which direction the popover arrow is pointing. You may be required to change the direction of the arrow while the popover is still visible on-screen.
 */
@property (nonatomic, readwrite) UIPopoverArrowDirection arrowDirection;

/* This method may be overridden to prevent the drawing of the content inset and drop shadow inside the popover. The default implementation of this method returns YES.
 */
#if UIKIT_DEFINE_AS_PROPERTIES
@property(class, nonatomic, readonly) BOOL wantsDefaultContentAppearance NS_AVAILABLE_IOS(6_0);
#else
+ (BOOL)wantsDefaultContentAppearance NS_AVAILABLE_IOS(6_0);
#endif

@end_START_COPYRIGHT__JIANSHU_BAIKAISHUILN__WechatPublic_Codeidea__END
