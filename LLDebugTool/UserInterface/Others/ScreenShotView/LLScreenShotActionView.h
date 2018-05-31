//
//  LLScreenShotActionView.h
//
//  Copyright (c) 2018 LLDebugTool Software Foundation (https://github.com/HDB-Li/LLDebugTool)
//
//  Permission is hereby granted, free of charge, to any person obtaining a copy
//  of this software and associated documentation files (the "Software"), to deal
//  in the Software without restriction, including without limitation the rights
//  to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
//  copies of the Software, and to permit persons to whom the Software is
//  furnished to do so, subject to the following conditions:
//
//  The above copyright notice and this permission notice shall be included in all
//  copies or substantial portions of the Software.
//
//  THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
//  IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
//  FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
//  AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
//  LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
//  OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
//  SOFTWARE.

#import <UIKit/UIKit.h>

typedef NS_ENUM(NSUInteger, LLScreenShotAction) {
    LLScreenShotActionRect      = 0,
    LLScreenShotActionRound     = 1,
    LLScreenShotActionArrow     = 2,
    LLScreenShotActionPen       = 3,
    LLScreenShotActionText      = 4,
    LLScreenShotActionBack      = 5,
    LLScreenShotActionCancel    = 6,
    LLScreenShotActionConfirm   = 7
};

@class LLScreenShotActionView;

@protocol LLScreenShotActionViewDelegate <NSObject>

@optional
/**
 Call when action button clicked.
 */
- (void)LLScreenShotActionView:(LLScreenShotActionView *)actionView didSelectAction:(LLScreenShotAction)action isSelected:(BOOL)isSelected;

@end

@interface LLScreenShotActionView : UIView

/**
 Delegate to accept click events.
 */
@property (nonatomic , weak , nullable) id <LLScreenShotActionViewDelegate> delegate;

/**
 Specifies the initialization method.
 */
- (instancetype)initWithFrame:(CGRect)frame;

@end