//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@interface QYPlayerPaoPaoFeedNeedLoginView : UIView
{
    UIView *backView;
    UIView *panelView;
    CDUnknownBlockType _confirmBlock;
    CDUnknownBlockType _cancelBlock;
}

@property(copy, nonatomic) CDUnknownBlockType cancelBlock; // @synthesize cancelBlock=_cancelBlock;
@property(copy, nonatomic) CDUnknownBlockType confirmBlock; // @synthesize confirmBlock=_confirmBlock;
- (void).cxx_destruct;
- (void)configTitleString:(id)arg1 cancelButtonString:(id)arg2 okButtonStr:(id)arg3;
- (void)dismisSelf;
- (void)showSelf;
- (void)confirmAct;
- (void)cancelAct;
- (void)configView;
- (id)initWithFrame:(struct CGRect)arg1;

@end

