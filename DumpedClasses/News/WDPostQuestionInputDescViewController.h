//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SSViewControllerBase.h"

#import "UITextViewDelegate.h"

@class NSDictionary, NSString, TTNavigationBarItemContainerView, TTViewWrapper, WDPostQuestionInputDescToolView, WDPostQuestionInputDescView, WDPostQuestionViewModel;

@interface WDPostQuestionInputDescViewController : SSViewControllerBase <UITextViewDelegate>
{
    WDPostQuestionViewModel *_viewModel;
    NSDictionary *_gdExtJson;
    NSString *_apiParams;
    WDPostQuestionInputDescView *_inputDescView;
    WDPostQuestionInputDescToolView *_toolView;
    TTViewWrapper *_wrapperView;
    TTNavigationBarItemContainerView *_containerView;
}

@property(retain, nonatomic) TTNavigationBarItemContainerView *containerView; // @synthesize containerView=_containerView;
@property(retain, nonatomic) TTViewWrapper *wrapperView; // @synthesize wrapperView=_wrapperView;
@property(retain, nonatomic) WDPostQuestionInputDescToolView *toolView; // @synthesize toolView=_toolView;
@property(retain, nonatomic) WDPostQuestionInputDescView *inputDescView; // @synthesize inputDescView=_inputDescView;
@property(copy, nonatomic) NSString *apiParams; // @synthesize apiParams=_apiParams;
@property(copy, nonatomic) NSDictionary *gdExtJson; // @synthesize gdExtJson=_gdExtJson;
@property(retain, nonatomic) WDPostQuestionViewModel *viewModel; // @synthesize viewModel=_viewModel;
- (void).cxx_destruct;
- (void)nextStepAction;
- (void)previousAction;
- (struct CGRect)frameForInputDescView;
- (struct CGRect)frameforToolView;
- (void)keyboardWillChangeFrame:(id)arg1;
- (void)setTartgetView:(id)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (id)initWithViewModel:(id)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

