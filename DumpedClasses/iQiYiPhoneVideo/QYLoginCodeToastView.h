//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "QYLoginTextFieldProtocol-Protocol.h"
#import "UITextFieldDelegate-Protocol.h"

@class NSString, NSTimer, UIButton, UIImageView, UILabel;
@protocol QYGifCodeVerifyProtocol;

@interface QYLoginCodeToastView : UIView <UITextFieldDelegate, QYLoginTextFieldProtocol>
{
    _Bool _timeOver;
    long long _verifyType;
    long long _codeRequestType;
    CDUnknownBlockType _closeBlock;
    id <QYGifCodeVerifyProtocol> _delegate;
    UILabel *_retryLabel;
    NSTimer *_timer;
    UIImageView *_codeView;
    UIButton *_retryBtn;
    UILabel *_wrongLabel;
    UIView *_frameView;
}

@property(retain, nonatomic) UIView *frameView; // @synthesize frameView=_frameView;
@property(retain, nonatomic) UILabel *wrongLabel; // @synthesize wrongLabel=_wrongLabel;
@property(retain, nonatomic) UIButton *retryBtn; // @synthesize retryBtn=_retryBtn;
@property(retain, nonatomic) UIImageView *codeView; // @synthesize codeView=_codeView;
@property(retain, nonatomic) NSTimer *timer; // @synthesize timer=_timer;
@property(nonatomic) _Bool timeOver; // @synthesize timeOver=_timeOver;
@property(retain, nonatomic) UILabel *retryLabel; // @synthesize retryLabel=_retryLabel;
@property(nonatomic) __weak id <QYGifCodeVerifyProtocol> delegate; // @synthesize delegate=_delegate;
@property(copy, nonatomic) CDUnknownBlockType closeBlock; // @synthesize closeBlock=_closeBlock;
@property(nonatomic) long long codeRequestType; // @synthesize codeRequestType=_codeRequestType;
@property(nonatomic) long long verifyType; // @synthesize verifyType=_verifyType;
- (void).cxx_destruct;
- (void)textFieldDidChange:(id)arg1;
- (_Bool)textFieldShouldReturn:(id)arg1;
- (_Bool)textField:(id)arg1 shouldChangeCharactersInRange:(struct _NSRange)arg2 replacementString:(id)arg3;
- (void)deleteBackward:(id)arg1;
- (void)questionLabelTap:(id)arg1;
- (_Bool)__isInputNumber:(id)arg1;
- (void)__clearInputContent;
- (id)__getSMSCode;
- (void)getPicAction:(id)arg1;
- (void)getPic;
- (void)refreshPic;
- (void)reset;
- (void)timeUp;
- (void)showWrongLabel;
- (void)resetInputSatus:(long long)arg1;
- (void)doRotate;
- (void)generateCodeTextField;
- (void)showVerifyResultFrameViewWithCode:(_Bool)arg1;
- (void)resignKeyBoard;
- (void)appearKeyBoard;
- (void)close;
- (void)retryCode;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

