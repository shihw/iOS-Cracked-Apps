//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class MQQCheckBox, MQQCustomInputTextField, MQQInputListView, MQQUnderLineButton, UILabel;

@interface MQQLoginView : UIView
{
    UILabel *_tipsLabel;
    MQQCustomInputTextField *_userNameTextField;
    MQQCustomInputTextField *_pwdTextField;
    MQQCheckBox *_rememberPwdCheckBox;
    UILabel *_rememberPwdLabel;
    MQQUnderLineButton *_forgetPwdButton;
    MQQInputListView *_inputListView;
}

@property(retain, nonatomic) MQQInputListView *inputListView; // @synthesize inputListView=_inputListView;
@property(retain, nonatomic) UILabel *rememberPwdLabel; // @synthesize rememberPwdLabel=_rememberPwdLabel;
@property(retain, nonatomic) MQQUnderLineButton *forgetPwdButton; // @synthesize forgetPwdButton=_forgetPwdButton;
@property(retain, nonatomic) MQQCheckBox *rememberPwdCheckBox; // @synthesize rememberPwdCheckBox=_rememberPwdCheckBox;
@property(retain, nonatomic) MQQCustomInputTextField *pwdTextField; // @synthesize pwdTextField=_pwdTextField;
@property(retain, nonatomic) MQQCustomInputTextField *userNameTextField; // @synthesize userNameTextField=_userNameTextField;
@property(retain, nonatomic) UILabel *tipsLabel; // @synthesize tipsLabel=_tipsLabel;
- (void)relayoutSubviews;
- (void)bgButtonClicked:(id)arg1;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end

