//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class HotelTinyPriceViewModel, HotelTotalPriceViewInfomationModel, HourRoomInformation, NSAttributedString, NSMutableArray, NSMutableDictionary, NSString, RoomBasicInfoViewModel, RoomPriceInfoViewModel;

@interface HotelBasicRoomViewModel : NSObject
{
    _Bool _isDeploySubRoom;
    _Bool _isOpenSubRoom;
    _Bool _isFullHouse;
    _Bool _isHidePrice;
    _Bool _isHourRoom;
    int _priceRoomID;
    int _priceShadowID;
    int _priceVendorID;
    RoomPriceInfoViewModel *_roomPrice;
    HotelTinyPriceViewModel *_backAmountPrice;
    RoomBasicInfoViewModel *_roomBasicInfo;
    NSMutableArray *_roomImageList;
    NSMutableArray *_roomInfoViewList;
    NSMutableArray *_marketTagList;
    NSMutableDictionary *_marketTagDict;
    long long _commentNum;
    RoomPriceInfoViewModel *_totalPrice;
    HotelTotalPriceViewInfomationModel *_priceTotalViewInfo;
    unsigned long long _priceTaxType;
    long long _wolvesSubRoomIndex;
    NSString *_sellingPoint;
    NSAttributedString *_sellingPointDisplayedString;
    HourRoomInformation *_hourRoom;
    double _cacheHeight;
}

+ (_Bool)isFilterHourRoom:(id)arg1;
+ (_Bool)isAllHourRoomReal:(id)arg1;
+ (_Bool)isAllHourRoom:(id)arg1;
+ (_Bool)isAllSubRoomFull:(id)arg1;
+ (_Bool)needChangePrice:(_Bool)arg1 isAllHourRoom:(_Bool)arg2 isFilterHourRoom:(_Bool)arg3 dataType:(int)arg4 lowBackRoomModel:(id)arg5 roomModel:(id)arg6 skipHidePirce:(_Bool)arg7;
+ (long long)startPriceComPare:(id)arg1 model2:(id)arg2;
+ (id)getBackPrice:(id)arg1;
+ (void)sortBasicRooms:(id)arg1;
+ (void)setGroupStyleRoomList:(id)arg1 roomInfoList:(id)arg2 basicRoomOrderList:(id)arg3 tagSortArr:(id)arg4 priceTaxType:(unsigned long long)arg5 isShowTotalPrice:(_Bool)arg6 isFilterHourRoom:(_Bool)arg7 dataType:(int)arg8;
@property(nonatomic) double cacheHeight; // @synthesize cacheHeight=_cacheHeight;
@property(nonatomic) int priceVendorID; // @synthesize priceVendorID=_priceVendorID;
@property(nonatomic) int priceShadowID; // @synthesize priceShadowID=_priceShadowID;
@property(nonatomic) int priceRoomID; // @synthesize priceRoomID=_priceRoomID;
@property(retain, nonatomic) HourRoomInformation *hourRoom; // @synthesize hourRoom=_hourRoom;
@property(retain, nonatomic) NSAttributedString *sellingPointDisplayedString; // @synthesize sellingPointDisplayedString=_sellingPointDisplayedString;
@property(retain, nonatomic) NSString *sellingPoint; // @synthesize sellingPoint=_sellingPoint;
@property(nonatomic) _Bool isHourRoom; // @synthesize isHourRoom=_isHourRoom;
@property(nonatomic) long long wolvesSubRoomIndex; // @synthesize wolvesSubRoomIndex=_wolvesSubRoomIndex;
@property(nonatomic) _Bool isHidePrice; // @synthesize isHidePrice=_isHidePrice;
@property(nonatomic) unsigned long long priceTaxType; // @synthesize priceTaxType=_priceTaxType;
@property(retain, nonatomic) HotelTotalPriceViewInfomationModel *priceTotalViewInfo; // @synthesize priceTotalViewInfo=_priceTotalViewInfo;
@property(retain, nonatomic) RoomPriceInfoViewModel *totalPrice; // @synthesize totalPrice=_totalPrice;
@property(nonatomic) long long commentNum; // @synthesize commentNum=_commentNum;
@property(retain, nonatomic) NSMutableDictionary *marketTagDict; // @synthesize marketTagDict=_marketTagDict;
@property(retain, nonatomic) NSMutableArray *marketTagList; // @synthesize marketTagList=_marketTagList;
@property(nonatomic) _Bool isFullHouse; // @synthesize isFullHouse=_isFullHouse;
@property(retain, nonatomic) NSMutableArray *roomInfoViewList; // @synthesize roomInfoViewList=_roomInfoViewList;
@property(retain, nonatomic) NSMutableArray *roomImageList; // @synthesize roomImageList=_roomImageList;
@property(retain, nonatomic) RoomBasicInfoViewModel *roomBasicInfo; // @synthesize roomBasicInfo=_roomBasicInfo;
@property(retain, nonatomic) HotelTinyPriceViewModel *backAmountPrice; // @synthesize backAmountPrice=_backAmountPrice;
@property(retain, nonatomic) RoomPriceInfoViewModel *roomPrice; // @synthesize roomPrice=_roomPrice;
@property(nonatomic) _Bool isOpenSubRoom; // @synthesize isOpenSubRoom=_isOpenSubRoom;
@property(nonatomic) _Bool isDeploySubRoom; // @synthesize isDeploySubRoom=_isDeploySubRoom;
- (void).cxx_destruct;
- (id)roomMoreText:(long long)arg1 hotelType:(int)arg2;
- (long long)roomShowCountInGroup:(long long)arg1 hotelType:(int)arg2;
- (void)createSellingPointStringIfNeeded:(id)arg1;
- (id)init;

@end

