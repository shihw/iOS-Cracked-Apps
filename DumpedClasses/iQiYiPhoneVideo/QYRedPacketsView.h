//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "IQYDataLoadManagerDelegate-Protocol.h"

@class IQYQueryRedPacketsManager, NSDictionary, NSString, NSTimer, UIImageView, UILabel;
@protocol QYRedPacketsViewDelegate;

@interface QYRedPacketsView : UIView <IQYDataLoadManagerDelegate>
{
    _Bool _isEnable;
    id <QYRedPacketsViewDelegate> _delegate;
    NSDictionary *_rpInfo;
    unsigned long long _countdown;
    UIImageView *_imgView;
    UILabel *_titleLabel;
    NSTimer *_timer;
    IQYQueryRedPacketsManager *_queryManager;
}

@property(retain, nonatomic) IQYQueryRedPacketsManager *queryManager; // @synthesize queryManager=_queryManager;
@property(nonatomic) _Bool isEnable; // @synthesize isEnable=_isEnable;
@property(retain, nonatomic) NSTimer *timer; // @synthesize timer=_timer;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIImageView *imgView; // @synthesize imgView=_imgView;
@property(nonatomic) unsigned long long countdown; // @synthesize countdown=_countdown;
@property(retain, nonatomic) NSDictionary *rpInfo; // @synthesize rpInfo=_rpInfo;
@property(nonatomic) __weak id <QYRedPacketsViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)dataLoadManagerFailed:(id)arg1;
- (void)dataLoadManagerFinished:(id)arg1;
- (void)queryIsWinning:(id)arg1;
- (void)disappearSelf;
- (void)clickOnMe:(id)arg1;
- (void)doCountdown;
- (void)setImage:(id)arg1;
- (void)layoutSubviews;
- (void)createSubViews;
- (id)initWithFrame:(struct CGRect)arg1 withInfo:(id)arg2;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

