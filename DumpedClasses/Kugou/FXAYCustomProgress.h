//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class UIColor;

@interface FXAYCustomProgress : UIView
{
    UIView *viewProgress;
    UIView *viewBg;
    float _progress;
    UIColor *_progressColor;
}

@property(nonatomic) UIColor *progressColor; // @synthesize progressColor=_progressColor;
@property(nonatomic) float progress; // @synthesize progress=_progress;
- (void).cxx_destruct;
- (void)setBackgroundColor:(id)arg1;
- (void)initViews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

