//
//  UINavigationBar+ATNavigationBarBackground.h
//  艾特智家
//
//  Created by asame_liao on 2016/12/19.
//  Copyright © 2016年 aite. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface UINavigationBar (ATNavigationBarBackground)
/**
 *  设置NavigationBar的私有属性backgroundView的背景颜色
 *
 */
- (void)hy_setBackgroundViewWithColor:(UIColor *)backgroundColor;


/**
 *  设置NavigationBar的背景透明度
 * */
- (void)hy_setBackgroundViewWithAlpha:(CGFloat)alpha;

/**
 *  重设NavigationBar的背景样式为默认的样式
 */
- (void)hy_resetBackgroundDefaultStyle;
@end
