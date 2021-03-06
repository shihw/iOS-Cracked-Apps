//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "QYPlayerDownloadController.h"

#import "QYOfflineADPPhoneViewControllerDelegete-Protocol.h"

@class NSString, QYOfflineADPPhoneViewController;
@protocol QYPhonePlayerDownloadControllerDelegate;

@interface QYPhonePlayerDownloadController : QYPlayerDownloadController <QYOfflineADPPhoneViewControllerDelegete>
{
    id <QYPhonePlayerDownloadControllerDelegate> _delegate;
    QYOfflineADPPhoneViewController *_downloadController;
}

@property(retain, nonatomic) QYOfflineADPPhoneViewController *downloadController; // @synthesize downloadController=_downloadController;
@property(nonatomic) __weak id <QYPhonePlayerDownloadControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)showOfflineCacheAD:(id)arg1;
- (void)didSelectPhoneVCADImageWithInfoDic:(id)arg1;
- (void)loadPhoneVCADImageResult:(long long)arg1 infoDic:(id)arg2;
- (void)offlineADPPhoneDidSendEventWithType:(long long)arg1 object:(id)arg2;
- (void)offlineADPPhoneBackFromOpenVip;
- (void)offlineADPPhoneOpenVip;
- (void)offlineADPPhoneRetryAction;
- (void)offlineADPPhoneAddDownloadSuccess;
- (void)offlineADPPadDidAddDownload;
- (void)offlineADPPadWillAddDownload;
- (void)offlineADPPhoneCloseViewController;
- (void)closeView:(id)arg1;
- (void)showFailView;
- (void)startloading;
- (void)loadPhonePlayerSingleData:(id)arg1 resListArray:(id)arg2;
- (void)loadPhonePlayerMultiData:(id)arg1 playInfoDic:(id)arg2;
- (void)didReceiveMemoryWarning;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

