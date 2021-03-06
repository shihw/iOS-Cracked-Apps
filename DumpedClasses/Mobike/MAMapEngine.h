//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class AMFontModelCreator, AMapNetworkStackManager, NSData, NSMutableDictionary, NSNumber, NSString;

@interface MAMapEngine : NSObject
{
    struct CAnAppInstance *_mapInstance;
    struct MAMapEngineCallBack *_mapEngineCallBack;
    AMFontModelCreator *_fontModelCreator;
    AMapNetworkStackManager *_netWorkStackManager;
    struct {
        double lenValue;
        double zoomLevel;
        double totalGeoPoint;
    } _mapPointLenWithWin;
    NSMutableDictionary *_tmcMD5Dic;
    NSString *_activeIndoorPoiID;
    int _activeIndoorFloorIndex;
    _Bool _indoorMapHide_engineCallBack;
    _Bool _indoorMapHide_building;
    _Bool _indoorMapHide_mapType;
    NSData *_vectorOverlayData;
    struct CGRect _vectorOverlayRect;
    char *_vectorOverlayBitmap;
    struct CGSize _vectoOverlayBitmapSize;
    CDUnknownBlockType _vectorOverlayBlock;
    _Bool _vectorOverlayNeedBlock;
    struct CGSize _drawAbleSize;
    struct CAMapSrvVectorOverLay *_pOverlay;
    int _vectorOverlayResult;
    NSString *_tmcDiu;
    double _scaleFactor;
    _Bool _isShowBuildings;
    _Bool _isShowLabels;
    _Bool _isShowTraffic;
    id <MAMapEngineRenderDelegate> _renderDelegate;
    id <MAMapEngineMapViewDelegate> _mapViewDelegate;
    long long _dayType;
    long long _mapStyleType;
    double _mapZoomLevel;
    long long _countOfDownLoadOperation;
    double _mapAngle;
    double _mapHeaderAngle;
    NSNumber *_buildingHeight;
    struct MAMapPoint _mapPointCenter;
    struct CGPoint _screenAnchor;
}

@property(nonatomic) struct CGPoint screenAnchor; // @synthesize screenAnchor=_screenAnchor;
@property(copy, nonatomic) NSNumber *buildingHeight; // @synthesize buildingHeight=_buildingHeight;
@property(nonatomic) _Bool isShowTraffic; // @synthesize isShowTraffic=_isShowTraffic;
@property(nonatomic) _Bool isShowLabels; // @synthesize isShowLabels=_isShowLabels;
@property(nonatomic) _Bool isShowBuildings; // @synthesize isShowBuildings=_isShowBuildings;
@property(nonatomic) long long countOfDownLoadOperation; // @synthesize countOfDownLoadOperation=_countOfDownLoadOperation;
@property(nonatomic) long long mapStyleType; // @synthesize mapStyleType=_mapStyleType;
@property(nonatomic) long long dayType; // @synthesize dayType=_dayType;
@property(nonatomic) __weak id <MAMapEngineMapViewDelegate> mapViewDelegate; // @synthesize mapViewDelegate=_mapViewDelegate;
@property(nonatomic) __weak id <MAMapEngineRenderDelegate> renderDelegate; // @synthesize renderDelegate=_renderDelegate;
- (void).cxx_destruct;
- (id)initWithDrawableSize:(struct CGSize)arg1 andBuildingHeight:(id)arg2 andScaleFactor:(double)arg3;
- (id)inializeTmcDiu;
- (id)getMd5WithInputString:(id)arg1;
- (void)createMapEngineWithDrawableSize:(struct CGSize)arg1;
- (void)initStyleAndTexture;
- (void)dealloc;
- (void)destroyMapEngine;
- (void)updateMapEngineSize:(struct CGSize)arg1;
- (void)postRender;
- (void)render;
- (int)renderVectorOverlay;
- (void)deleteVectorOverlay;
- (void)OnIndoorBuildingActivity:(unsigned int)arg1 andIndoorBuilding:(struct am_indoor_struct *)arg2;
- (void)OnMapRender:(unsigned int)arg1 andState:(int)arg2;
- (void)OnMapdatarequired:(unsigned int)arg1 dataSource:(int)arg2 tiles:(struct am_maptile_struct *)arg3 tileSize:(int)arg4;
- (char *)OnCharBitmapRequired:(unsigned int)arg1 andGChar:(unsigned short)arg2;
- (void)OnMapLoadTextureByName:(unsigned int)arg1 pParameterBUffer:(char *)arg2 andType:(int)arg3;
- (void)referenceChanged:(unsigned short *)arg1 newGrid:(unsigned short *)arg2;
- (void)requestMapDataWithTiles:(id)arg1 dataSource:(int)arg2;
- (_Bool)canStopRender;
- (id)getIndoorInfoWithGridList:(id)arg1 andIsIndex:(_Bool)arg2;
- (id)getMeshByTiles:(id)arg1 dataSource:(int)arg2;
- (void)setMapEngineData:(id)arg1 andDataSource:(int)arg2;
- (void)processRecivedTileDataV4:(char *)arg1 skipIndex:(long long)arg2 dataSize:(int)arg3 dataSource:(int)arg4;
- (long long)getShort:(char *)arg1 pos:(long long)arg2;
- (long long)getInt:(char *)arg1 pos:(long long)arg2;
- (void)setStyleWithMapStyleType:(long long)arg1 andDayType:(long long)arg2;
- (id)getIndoorInfoWithAMIndoorBuilding:(struct am_indoor_struct *)arg1;
- (void)clearVectorOverlay;
- (void)setVectorOverlayData:(id)arg1 rect:(struct CGRect)arg2 bitmap:(char *)arg3 bitmapSize:(struct CGSize)arg4 andCompleteBlock:(CDUnknownBlockType)arg5;
- (float)getSkyPercentWithZoomLevel:(float)arg1 andCameraDegree:(float)arg2;
- (double)getAspectRatio;
- (double)getCameraFov;
- (void)getCameraFromWith:(double *)arg1;
- (void)setCustomTextureData:(id)arg1;
- (void)setCustomBkTileWithColor:(id)arg1;
- (id)getCustomBkTileDataWithColor:(id)arg1;
- (void)setStyleDataWith:(void *)arg1 dataLen:(unsigned int)arg2 isDataZipped:(_Bool)arg3;
- (void)setMaxFPS:(unsigned long long)arg1;
- (void)setIndoorIsShow:(_Bool)arg1;
- (void)setEngineReadDataBase:(_Bool)arg1;
- (void)setIndoorInfo:(id)arg1;
- (void)setTrafficColors:(id)arg1;
- (void)setStyleType:(long long)arg1 andDayType:(long long)arg2;
- (struct CGPoint)convertGLPointFromWinPoint:(struct CGPoint)arg1;
- (struct CGPoint)convertWinPointFromGLPoint:(struct CGPoint)arg1;
- (struct MAMapPoint)convertMapPointFromGLPoint:(struct CGPoint)arg1;
- (struct CGPoint)convertGLPointFromMapPoint:(struct MAMapPoint)arg1;
- (double)getMapMinZoomLevel;
- (double)getMapMaxZoomLevel;
- (id)getSelectMapPoisWithwinPoint:(struct CGPoint)arg1 andRadius:(double)arg2;
- (id)getCurrentTiles;
- (double)getGLPointLenWithWin:(double)arg1;
- (double)getMapPointLenWithWin:(double)arg1;
- (void)destoryEngineProjection:(void *)arg1;
- (void *)getEngineProjectionWith:(_Bool)arg1;
- (void)doIndoorMapHideWithValue:(_Bool)arg1 andType:(long long)arg2;
@property(nonatomic) double mapHeaderAngle; // @synthesize mapHeaderAngle=_mapHeaderAngle;
@property(nonatomic) double mapAngle; // @synthesize mapAngle=_mapAngle;
@property(nonatomic) double mapZoomLevel; // @synthesize mapZoomLevel=_mapZoomLevel;
@property(nonatomic) struct MAMapPoint mapPointCenter; // @synthesize mapPointCenter=_mapPointCenter;
- (void)changeMapStatusWithMapStyleType:(long long)arg1 andDayType:(long long)arg2;
- (struct CAMapSrvProj *)projection;
- (float *)getProjectionMatrix;
- (float *)getViewMatrix;

@end

