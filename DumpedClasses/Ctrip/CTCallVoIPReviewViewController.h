//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

@class CTVoipInfoViewModel, UILabel, UITextField, UIView;

@interface CTCallVoIPReviewViewController : UIViewController
{
    CTVoipInfoViewModel *_viewModel;
    id <CTCallVoIPReviewViewControllerDelegate> _delegate;
    UILabel *_userSipAccountIdLabel;
    UITextField *_callToSipIdTextField;
    UIView *_containerView;
}

@property(retain, nonatomic) UIView *containerView; // @synthesize containerView=_containerView;
@property(retain, nonatomic) UITextField *callToSipIdTextField; // @synthesize callToSipIdTextField=_callToSipIdTextField;
@property(retain, nonatomic) UILabel *userSipAccountIdLabel; // @synthesize userSipAccountIdLabel=_userSipAccountIdLabel;
@property(nonatomic) __weak id <CTCallVoIPReviewViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) CTVoipInfoViewModel *viewModel; // @synthesize viewModel=_viewModel;
- (void).cxx_destruct;
- (void)btnStartCallClicked:(id)arg1;
- (id)callToNumber;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)initView;
- (void)didReceiveMemoryWarning;
- (void)viewDidLoad;
- (id)initWithViewModel:(id)arg1;
- (void)dealloc;

@end

