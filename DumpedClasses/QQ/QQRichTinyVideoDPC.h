//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSDictionary, NSMutableDictionary, NSString;

@interface QQRichTinyVideoDPC : NSObject
{
    int _platform;
    NSMutableDictionary *_tinyVideoPreDownloadFile;
    NSMutableDictionary *_shortVideoPreDownloadFile;
    NSMutableDictionary *_tinyVideoAutoDownloadFile;
    NSMutableDictionary *_tinyVideoAutoDownloadThumb;
    NSMutableDictionary *_tinyVideoFileResolutions;
    NSMutableDictionary *_tinyVideoFileBitrates;
    NSMutableDictionary *_tinyVideoDDBitrates;
    NSMutableDictionary *_tinyVideoDDResolutions;
    unsigned int _tinyVideoDDFps;
    unsigned int _tinyVideoDDFpsFront;
    _Bool _IsEnableVideoExtraction;
    NSArray *_extractVideoWebsiteList;
    double _tinyVideoThumbQuality;
    struct CGSize _tinyVideoRecordResolution;
    unsigned long long _tinyVideoRecordBitrate;
    double _TinyVideoRecordVideoSampleCriticalTime;
    unsigned long long _ptvFileBitrate;
    unsigned int _tinyVideoBeautyLevel;
    unsigned int _tinyVideoDDRenderAlphaFix;
    unsigned int _tinyVideoSmoothLevel;
    unsigned int _tinyVideoCapturePixelFormat;
    double _tinyVideoDDRenderScale;
    _Bool _enableTinyVideo;
    _Bool _autoPlayTinyVideoInAIO;
    _Bool _tinyVideoHDEnable;
    _Bool _tinyVideoSaveEnable;
    _Bool _videoPreloadEnable;
    _Bool _bHighResolutionStillImageOutputEnabled;
    _Bool _bShouldPreReserveVideo;
    _Bool _supportDynamicDecoration;
    int _shortVideoPreDownloadDuration;
    int _videoPreloadEnableEditTimesDaily;
    float _videoPreloadSectionDuration;
    int _videoPreloadSureMaxWaitingTime;
    long long _autoDownloadTimeOutInterval;
    double _tinyVideoDuration;
    double _guiderVideoDuration;
    double _ptvMaxTime;
    double _ptvMinDuration;
    double _ptvCellThumbMaxSide;
    double _ptvBeautyFreeMemLimit;
    double _shortVideoCellMaxSide;
    double _shortVideoCellMiniSide;
    double _tinyVideoCellMaxSide;
    double _tinyVideoCellMiniSide;
    long long _richMediaPickerDefaultCamera;
    NSString *_tinyVideoRecordPresetName;
    NSString *_tinyVideoRecordPresetNameFront;
    NSString *_tinyVideoRecordPresetNamePhoto;
    NSString *_tinyVideoRecordPresetNamePhotoFront;
    NSDictionary *_videoPreloadEnableNet;
    NSMutableDictionary *_shortVideoThumbMaxLongSide;
    NSMutableDictionary *_shortVideoThumbQuality;
    NSString *_tinyVideoDDPresetName;
    NSString *_tinyVideoDDPresetNameFront;
    struct CGSize _tinyVideoHDSize;
    struct CGSize _tinyVideoDDDeviceCaptureResolution;
    struct CGSize _tinyVideoDDDeviceCaptureResolutionFront;
    struct CGSize _tinyVideoNightModeCaptureResolution;
}

+ (id)getInstance;
@property(nonatomic) struct CGSize tinyVideoNightModeCaptureResolution; // @synthesize tinyVideoNightModeCaptureResolution=_tinyVideoNightModeCaptureResolution;
@property(nonatomic) _Bool supportDynamicDecoration; // @synthesize supportDynamicDecoration=_supportDynamicDecoration;
@property(nonatomic) struct CGSize tinyVideoDDDeviceCaptureResolutionFront; // @synthesize tinyVideoDDDeviceCaptureResolutionFront=_tinyVideoDDDeviceCaptureResolutionFront;
@property(nonatomic) struct CGSize tinyVideoDDDeviceCaptureResolution; // @synthesize tinyVideoDDDeviceCaptureResolution=_tinyVideoDDDeviceCaptureResolution;
@property(retain, nonatomic) NSString *tinyVideoDDPresetNameFront; // @synthesize tinyVideoDDPresetNameFront=_tinyVideoDDPresetNameFront;
@property(retain, nonatomic) NSString *tinyVideoDDPresetName; // @synthesize tinyVideoDDPresetName=_tinyVideoDDPresetName;
@property(retain, nonatomic) NSMutableDictionary *shortVideoThumbQuality; // @synthesize shortVideoThumbQuality=_shortVideoThumbQuality;
@property(retain, nonatomic) NSMutableDictionary *shortVideoThumbMaxLongSide; // @synthesize shortVideoThumbMaxLongSide=_shortVideoThumbMaxLongSide;
@property(retain, nonatomic) NSDictionary *videoPreloadEnableNet; // @synthesize videoPreloadEnableNet=_videoPreloadEnableNet;
@property(retain, nonatomic) NSString *tinyVideoRecordPresetNamePhotoFront; // @synthesize tinyVideoRecordPresetNamePhotoFront=_tinyVideoRecordPresetNamePhotoFront;
@property(retain, nonatomic) NSString *tinyVideoRecordPresetNamePhoto; // @synthesize tinyVideoRecordPresetNamePhoto=_tinyVideoRecordPresetNamePhoto;
@property(retain, nonatomic) NSString *tinyVideoRecordPresetNameFront; // @synthesize tinyVideoRecordPresetNameFront=_tinyVideoRecordPresetNameFront;
@property(retain, nonatomic) NSString *tinyVideoRecordPresetName; // @synthesize tinyVideoRecordPresetName=_tinyVideoRecordPresetName;
@property(retain, nonatomic) NSArray *extractVideoWebsiteList; // @synthesize extractVideoWebsiteList=_extractVideoWebsiteList;
@property(nonatomic) _Bool IsEnableVideoExtraction; // @synthesize IsEnableVideoExtraction=_IsEnableVideoExtraction;
@property(readonly, nonatomic) _Bool bShouldPreReserveVideo; // @synthesize bShouldPreReserveVideo=_bShouldPreReserveVideo;
@property(readonly, nonatomic) _Bool bHighResolutionStillImageOutputEnabled; // @synthesize bHighResolutionStillImageOutputEnabled=_bHighResolutionStillImageOutputEnabled;
@property(readonly, nonatomic) int videoPreloadSureMaxWaitingTime; // @synthesize videoPreloadSureMaxWaitingTime=_videoPreloadSureMaxWaitingTime;
@property(readonly, nonatomic) float videoPreloadSectionDuration; // @synthesize videoPreloadSectionDuration=_videoPreloadSectionDuration;
@property(readonly, nonatomic) int videoPreloadEnableEditTimesDaily; // @synthesize videoPreloadEnableEditTimesDaily=_videoPreloadEnableEditTimesDaily;
@property(readonly, nonatomic) _Bool videoPreloadEnable; // @synthesize videoPreloadEnable=_videoPreloadEnable;
@property(nonatomic) long long richMediaPickerDefaultCamera; // @synthesize richMediaPickerDefaultCamera=_richMediaPickerDefaultCamera;
@property(nonatomic) double tinyVideoCellMiniSide; // @synthesize tinyVideoCellMiniSide=_tinyVideoCellMiniSide;
@property(nonatomic) double tinyVideoCellMaxSide; // @synthesize tinyVideoCellMaxSide=_tinyVideoCellMaxSide;
@property(nonatomic) double shortVideoCellMiniSide; // @synthesize shortVideoCellMiniSide=_shortVideoCellMiniSide;
@property(nonatomic) double shortVideoCellMaxSide; // @synthesize shortVideoCellMaxSide=_shortVideoCellMaxSide;
@property(nonatomic) _Bool tinyVideoSaveEnable; // @synthesize tinyVideoSaveEnable=_tinyVideoSaveEnable;
@property(nonatomic) double ptvBeautyFreeMemLimit; // @synthesize ptvBeautyFreeMemLimit=_ptvBeautyFreeMemLimit;
@property(nonatomic) double ptvCellThumbMaxSide; // @synthesize ptvCellThumbMaxSide=_ptvCellThumbMaxSide;
@property(nonatomic) double ptvMinDuration; // @synthesize ptvMinDuration=_ptvMinDuration;
@property(nonatomic) double ptvMaxTime; // @synthesize ptvMaxTime=_ptvMaxTime;
@property(nonatomic) struct CGSize tinyVideoHDSize; // @synthesize tinyVideoHDSize=_tinyVideoHDSize;
@property(nonatomic) _Bool tinyVideoHDEnable; // @synthesize tinyVideoHDEnable=_tinyVideoHDEnable;
@property(nonatomic) double guiderVideoDuration; // @synthesize guiderVideoDuration=_guiderVideoDuration;
@property(nonatomic) double tinyVideoDuration; // @synthesize tinyVideoDuration=_tinyVideoDuration;
@property(readonly, nonatomic) long long autoDownloadTimeOutInterval; // @synthesize autoDownloadTimeOutInterval=_autoDownloadTimeOutInterval;
@property(nonatomic) int shortVideoPreDownloadDuration; // @synthesize shortVideoPreDownloadDuration=_shortVideoPreDownloadDuration;
@property(readonly, nonatomic) _Bool autoPlayTinyVideoInAIO; // @synthesize autoPlayTinyVideoInAIO=_autoPlayTinyVideoInAIO;
@property(readonly, nonatomic) _Bool enableTinyVideo; // @synthesize enableTinyVideo=_enableTinyVideo;
- (int)getSessionType:(id)arg1;
- (double)tinyVideoDDRenderScale;
- (unsigned int)tinyVideoCapturePixelFormat;
- (unsigned int)tinyVideoSmoothLevel;
- (unsigned int)tinyVideoDDRenderAlphaFix;
- (unsigned int)tinyVideoBeautyLevel;
- (unsigned int)tinyVideoDDFpsFront;
- (unsigned int)tinyVideoDDFps;
- (unsigned long long)tinyVideoDDBitrate:(int)arg1;
- (struct CGSize)tinyVideoDDResolution:(int)arg1;
- (_Bool)enableDynamicDecoration;
- (double)shortVideoThumbQuality:(int)arg1;
- (double)shortVideoThumbMaxLongSide:(int)arg1;
- (_Bool)enablePreloadVideoByNet;
- (id)websiteDomainNameForExtractionUrl:(id)arg1;
- (_Bool)isInVideoExtractionWebsiteList:(id)arg1;
- (id)_websiteDomainNameForUrl:(id)arg1 websiteList:(id)arg2;
- (void)_updateExtractVideoWebsiteList:(id)arg1;
- (void)_updateVideoExtractionSetting;
- (void)_setDefaultVideoExtractionSetting;
- (void)updateDpc:(id)arg1;
- (double)TinyVideoRecordVideoSampleCriticalTime;
- (unsigned long long)tinyVideoRecordBitrate;
- (struct CGSize)tinyVideoRecordResolution;
- (double)tinyVideoThumbQuality;
- (unsigned long long)ptvFileBitrate;
- (unsigned long long)tinyVideoFileBitrate:(int)arg1;
- (struct CGSize)tinyVideoFileResolution:(int)arg1;
- (_Bool)autoDownloadTinyVideoFile:(int)arg1;
- (_Bool)preDownloadShortVideoFile:(int)arg1;
- (_Bool)preDownloadTinyVideoFile:(int)arg1;
- (id)net4Type:(int)arg1;
- (id)netType:(int)arg1;
- (id)sesstionType:(int)arg1;
- (id)get4FloatNetDicFromString:(id)arg1;
- (id)resolutionValueFromString:(id)arg1;
- (id)bitrateFromString:(id)arg1;
- (id)netTypeValueFromString:(id)arg1;
- (void)setDefault;
- (void)dealloc;
- (id)init;

@end

