//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class UIActivityIndicatorView, UIButton, UIImageView, UITextField;

@interface CTDestSearchBarView : UIView
{
    int _skin;
    id <UITextFieldDelegate><CTDestSearchBarViewDelegate> _searchDelegate;
    UITextField *_searchTextField;
    UIActivityIndicatorView *_acitvityView;
    UIButton *_popNavBtn;
    UIImageView *_searchImageView;
    UIButton *_searchCancelBtn;
    double _statusBarHeight;
}

@property(nonatomic) double statusBarHeight; // @synthesize statusBarHeight=_statusBarHeight;
@property(nonatomic) int skin; // @synthesize skin=_skin;
@property(retain, nonatomic) UIButton *searchCancelBtn; // @synthesize searchCancelBtn=_searchCancelBtn;
@property(retain, nonatomic) UIImageView *searchImageView; // @synthesize searchImageView=_searchImageView;
@property(retain, nonatomic) UIButton *popNavBtn; // @synthesize popNavBtn=_popNavBtn;
@property(retain, nonatomic) UIActivityIndicatorView *acitvityView; // @synthesize acitvityView=_acitvityView;
@property(retain, nonatomic) UITextField *searchTextField; // @synthesize searchTextField=_searchTextField;
@property(nonatomic) __weak id <UITextFieldDelegate><CTDestSearchBarViewDelegate> searchDelegate; // @synthesize searchDelegate=_searchDelegate;
- (void).cxx_destruct;
- (id)bgColor;
- (void)editTextField:(id)arg1;
- (void)backBarButtonClicked;
- (void)cancelSearch;
- (void)updateFrameForEditStatus:(_Bool)arg1;
- (id)initInNavigationBarWithFrame:(struct CGRect)arg1 skin:(int)arg2;
- (id)initWithFrame:(struct CGRect)arg1 skin:(int)arg2;
- (id)initInNavigationBarWithFrame:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

