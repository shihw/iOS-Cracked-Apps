//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class KeyboadStack, NSMutableArray, NSString, PKeyboardNumbersView, SKeyboardNumbersView, UITextField;

@interface SKeyboardView : UIView
{
    UITextField *relativeTfd;
    SKeyboardNumbersView *numbersView;
    NSMutableArray *arrayBuffer;
    KeyboadStack *keyboardStack;
    int showType;
    _Bool isShowing;
    _Bool bNeedEncrypt;
    NSString *encrytResult;
    _Bool bClearBufferWhileDeleting;
    PKeyboardNumbersView *numbersViewWithMoney;
    PKeyboardNumbersView *numbersViewWithIdentity;
    PKeyboardNumbersView *numbersViewWithAccount;
    PKeyboardNumbersView *numbersViewWithNewLogin;
    unsigned long long textMaxLength;
}

@property(nonatomic) _Bool bClearBufferWhileDeleting; // @synthesize bClearBufferWhileDeleting;
@property(nonatomic) unsigned long long textMaxLength; // @synthesize textMaxLength;
@property(nonatomic) _Bool bNeedEncrypt; // @synthesize bNeedEncrypt;
@property(retain, nonatomic) NSString *encrytResult; // @synthesize encrytResult;
@property(nonatomic) _Bool isShowing; // @synthesize isShowing;
@property(nonatomic) int showType; // @synthesize showType;
@property(retain, nonatomic) KeyboadStack *keyboardStack; // @synthesize keyboardStack;
@property(retain, nonatomic) UITextField *relativeTfd; // @synthesize relativeTfd;
@property(retain, nonatomic) NSMutableArray *arrayBuffer; // @synthesize arrayBuffer;
@property(retain, nonatomic) PKeyboardNumbersView *numbersViewWithNewLogin; // @synthesize numbersViewWithNewLogin;
@property(retain, nonatomic) PKeyboardNumbersView *numbersViewWithAccount; // @synthesize numbersViewWithAccount;
@property(retain, nonatomic) PKeyboardNumbersView *numbersViewWithIdentity; // @synthesize numbersViewWithIdentity;
@property(retain, nonatomic) PKeyboardNumbersView *numbersViewWithMoney; // @synthesize numbersViewWithMoney;
@property(retain, nonatomic) SKeyboardNumbersView *numbersView; // @synthesize numbersView;
- (void).cxx_destruct;
- (void)dealloc;
- (void)unShift;
- (void)clearInputBuffer;
- (void)keyboardKeyPressed:(long long)arg1;
- (void)showView:(id)arg1 toDisappear:(id)arg2 forView:(id)arg3;
- (void)appendCharacterUsingIndex:(long long)arg1;
- (void)generateResult;
- (void)setArrayBufferWithString:(id)arg1;
- (id)plainTextWithArrayBuffer;
- (id)desDecrytData:(id)arg1;
- (id)desEncrytString:(id)arg1;
- (id)encrytResult:(id *)arg1;
- (void)removeOtherKeyBordView;
- (id)initWithFrame:(struct CGRect)arg1;

@end

