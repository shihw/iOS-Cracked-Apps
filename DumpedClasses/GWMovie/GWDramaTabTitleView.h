//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug  6 2017 20:42:30).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class GWDramaTabInfo, UILabel;
@protocol GWDramaTabTitleViewDelegate;

@interface GWDramaTabTitleView : UIView
{
    _Bool _isSelected;
    GWDramaTabInfo *_dramaTabInfo;
    id <GWDramaTabTitleViewDelegate> _delegate;
    UILabel *_titleLab;
}

@property(retain, nonatomic) UILabel *titleLab; // @synthesize titleLab=_titleLab;
@property(nonatomic) __weak id <GWDramaTabTitleViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) GWDramaTabInfo *dramaTabInfo; // @synthesize dramaTabInfo=_dramaTabInfo;
@property(nonatomic) _Bool isSelected; // @synthesize isSelected=_isSelected;
- (void).cxx_destruct;
- (void)setTitleText:(id)arg1;
- (void)tapClick;
- (id)initWithFrame:(struct CGRect)arg1;

@end

