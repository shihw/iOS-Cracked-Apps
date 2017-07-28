//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FMMediaBaseController.h"

#import "FMFilterSelectViewDelegate.h"
#import "FMMediaPickerCtrlViewDelegate.h"
#import "FMVideoCaptureEngineDelegate.h"

@class FMMediaPickerCtrlView, FMVideoCaptureEngine, NSString, UIView;

@interface FMMediaPickerController : FMMediaBaseController <FMFilterSelectViewDelegate, FMMediaPickerCtrlViewDelegate, FMVideoCaptureEngineDelegate>
{
    FMMediaPickerCtrlView *_ctrlView;
    _Bool _isCameraAuthorized;
    id <FMMediaPickerControllerDelegate> _delegate;
    unsigned long long _maxPickImageCount;
    UIView *_bottomBar;
    FMVideoCaptureEngine *_captureEngine;
}

@property(retain, nonatomic) FMMediaPickerCtrlView *ctrlView; // @synthesize ctrlView=_ctrlView;
@property(retain, nonatomic) FMVideoCaptureEngine *captureEngine; // @synthesize captureEngine=_captureEngine;
@property(nonatomic) __weak UIView *bottomBar; // @synthesize bottomBar=_bottomBar;
@property(nonatomic) unsigned long long maxPickImageCount; // @synthesize maxPickImageCount=_maxPickImageCount;
@property(nonatomic) id <FMMediaPickerControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)onRecordTimer:(CDStruct_1b6d18a9)arg1;
- (id)orientationAdapt:(id)arg1 withPosition:(long long)arg2;
- (void)onTakePhotoCallBack:(id)arg1 andPosition:(long long)arg2;
- (void)onFinishRecordCallBack:(id)arg1 withCover:(id)arg2;
- (id)onChooseFilter:(id)arg1;
- (void)onSelectFilter:(int)arg1;
- (void)dealloc;
- (void)didReceiveMemoryWarning;
- (void)setAlbumEnable:(_Bool)arg1;
- (void)onPreviewState:(_Bool)arg1;
- (void)onTakePhotoAction;
- (void)onSwitchCameraAction;
- (void)onBeautyAction:(_Bool)arg1;
- (void)onDelectRecordAction;
- (void)onFinishRecordAction;
- (void)onPauseRecordAction:(CDUnknownBlockType)arg1;
- (void)onStartRecordAction;
- (void)onCancelRecordAction;
- (void)deleteImage:(long long)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)checkVideoAuth:(CDUnknownBlockType)arg1;
- (void)checkAudioAuth:(CDUnknownBlockType)arg1;
- (void)viewDidLoad;
- (void)onVideoReq;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
