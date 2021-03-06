//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "DCBaseComponent.h"

@class DBPPriceModel, DCIncreaseThankPriceModel, DCOrderPayService, DCPayFeeUnit, DCThanksFeeManager, NSString, UIView;

@interface DCPayFeeCom : DCBaseComponent
{
    NSString *_order_id;
    DBPPriceModel *_priceModel;
    DCIncreaseThankPriceModel *_increaseModel;
    long long _payType;
    CDUnknownBlockType _resultBlock;
    UIView *_inView;
    DCOrderPayService *_payDetailService;
    DCThanksFeeManager *_thanksManager;
    DCPayFeeUnit *_payInfoView;
    long long _thanksFeeType;
}

+ (void)openWxPaymentFunction:(CDUnknownBlockType)arg1;
@property(nonatomic) long long thanksFeeType; // @synthesize thanksFeeType=_thanksFeeType;
@property(retain, nonatomic) DCPayFeeUnit *payInfoView; // @synthesize payInfoView=_payInfoView;
@property(retain, nonatomic) DCThanksFeeManager *thanksManager; // @synthesize thanksManager=_thanksManager;
@property(retain, nonatomic) DCOrderPayService *payDetailService; // @synthesize payDetailService=_payDetailService;
@property(nonatomic) __weak UIView *inView; // @synthesize inView=_inView;
@property(copy, nonatomic) CDUnknownBlockType resultBlock; // @synthesize resultBlock=_resultBlock;
@property(nonatomic) long long payType; // @synthesize payType=_payType;
@property(retain, nonatomic) DCIncreaseThankPriceModel *increaseModel; // @synthesize increaseModel=_increaseModel;
@property(retain, nonatomic) DBPPriceModel *priceModel; // @synthesize priceModel=_priceModel;
@property(copy, nonatomic) NSString *order_id; // @synthesize order_id=_order_id;
- (void).cxx_destruct;
- (void)stopOrderPay;
- (void)updatePayButton:(long long)arg1;
- (void)startPayOrder:(id)arg1;
- (void)clickPayInfoAction:(id)arg1;
- (id)getDefaultPayChannel;
- (void)beginThanksFeePay;
- (void)beginCancelFeePay;
- (void)getPayDetial:(long long)arg1;
- (void)clickedEmergeEvent:(id)arg1;
- (void)beginFarePay:(_Bool)arg1;
- (void)dispatchEvent;
- (id)bringPayViewFront;
- (id)showInView:(id)arg1 resultBlock:(CDUnknownBlockType)arg2;
- (CDUnknownBlockType)thansFeeTypeEqual;
- (CDUnknownBlockType)payTypeEqual;
- (CDUnknownBlockType)increaseModelEqual;
- (CDUnknownBlockType)priceModelEqual;
- (CDUnknownBlockType)orderIdEqual;
- (id)clearData;
- (void)dealloc;

@end

