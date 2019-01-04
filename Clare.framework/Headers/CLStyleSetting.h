//
//  CLStyleSetting.h
//  Clare
//
//  Created by LiuZekai on 2019/1/1.
//  Copyright © 2019 Clare. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface CLStyleSetting : NSObject

@property (assign) UIColor * chatBgColor;
@property (assign) UIColor * linkColor;

@property (assign) UIColor * headerBarBgColor;
@property (assign) UIColor * headerBarFontColor;

@property (assign) UIColor * bubbleBgColor;
@property (assign) BOOL  bubbleBorder;
@property (assign) UIColor * bubbleFontColor;

@property (assign) UIColor * quickReplyButtonBgColor;
@property (assign) BOOL  quickReplyButtonBorder;
@property (assign) UIColor * quickReplyButtonFontColor;

@property (assign) UIColor * searchResultFontColor;

@property (assign) UIColor * postbackBgColor;
@property (assign) BOOL  postbackBorder;
@property (assign) UIColor * postbackFontColor;

@property (assign) UIColor * userBubbleBgColor;
@property (assign) BOOL userBubbleBorder;
@property (assign) UIColor * userBubbleFontColor;

@end

NS_ASSUME_NONNULL_END
