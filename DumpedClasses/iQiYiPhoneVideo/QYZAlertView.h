//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSString, UIButton;
@protocol QYZAlertViewDelegate;

@interface QYZAlertView : UIView
{
    _Bool _hasCancel;
    int _animationType;
    int _contentType;
    UIButton *_okButton;
    UIButton *_cancelButton;
    id <QYZAlertViewDelegate> _delegate;
    CDUnknownBlockType _completeBlock;
    NSString *_title;
    NSString *_text;
    UIView *_contentView;
    UIView *_alertView;
    struct CGSize _contentSize;
}

@property(retain, nonatomic) UIView *alertView; // @synthesize alertView=_alertView;
@property(nonatomic) int contentType; // @synthesize contentType=_contentType;
@property(nonatomic) _Bool hasCancel; // @synthesize hasCancel=_hasCancel;
@property(retain, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
@property(copy, nonatomic) NSString *text; // @synthesize text=_text;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(nonatomic) struct CGSize contentSize; // @synthesize contentSize=_contentSize;
@property(copy, nonatomic) CDUnknownBlockType completeBlock; // @synthesize completeBlock=_completeBlock;
@property(nonatomic) id <QYZAlertViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) int animationType; // @synthesize animationType=_animationType;
@property(retain, nonatomic) UIButton *cancelButton; // @synthesize cancelButton=_cancelButton;
@property(retain, nonatomic) UIButton *okButton; // @synthesize okButton=_okButton;
- (void)handleAction:(id)arg1;
- (void)calculateContentSize;
- (void)setupActionButtons;
- (void)setupContentView;
- (void)setupTextLabel;
- (void)setupLine;
- (void)setupTitleLabel;
- (void)setupAlertView;
- (void)startBounceAnimation;
- (void)dismiss;
- (void)show;
- (void)setupViews;
- (void)dealloc;
- (id)initWithTitle:(id)arg1 contentView:(id)arg2 hasCancelButton:(_Bool)arg3;

@end

