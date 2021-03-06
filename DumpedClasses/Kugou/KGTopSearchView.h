//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class TopSearchTextField, UIButton, UIImageView;

@interface KGTopSearchView : UIView
{
    UIView *_searchBgView;
    UIImageView *_iconImgView;
    struct CGRect _viewFrame;
    TopSearchTextField *_searchTextField;
    UIButton *_cancelBtn;
}

@property(retain, nonatomic) UIButton *cancelBtn; // @synthesize cancelBtn=_cancelBtn;
@property(retain, nonatomic) TopSearchTextField *searchTextField; // @synthesize searchTextField=_searchTextField;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)changeThemeBackgroundColor;
- (void)createFrameWith:(struct CGRect)arg1;
- (void)setFrame:(struct CGRect)arg1;
- (void)createView;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)init;
- (void)dealloc;

@end

