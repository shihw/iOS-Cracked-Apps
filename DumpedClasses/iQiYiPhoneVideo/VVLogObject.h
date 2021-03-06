//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "NSCoding-Protocol.h"
#import "NSCopying-Protocol.h"

@class NSMutableString, NSString;

@interface VVLogObject : NSObject <NSCoding, NSCopying>
{
    int _logStatus;
    NSString *_type;
    NSString *_tvid;
    NSString *_fromtype;
    NSString *_fromsubtype;
    NSString *_categoryid;
    NSString *_leafcategoryid;
    NSString *_isvideo1;
    NSString *_adreqtime;
    NSString *_isvv2;
    NSString *_isvideo2;
    NSString *_loadtime;
    NSString *_isvideo3;
    NSString *_playduration;
    NSString *_restype;
    NSString *_buffer_cnt;
    NSString *_isvv1;
    NSString *_api_loadtime;
    NSString *_addr_loadtime;
    NSString *_gps;
    NSString *_response_code;
    NSString *_albumid;
    NSString *_resolution;
    NSString *_Paytype;
    NSString *_phoneNumber;
    NSString *_isVip;
    NSString *_userType;
    NSString *_isFee;
    NSString *_rpt;
    NSString *_playtype;
    NSString *_client_type;
    NSString *_idfv;
    NSString *_ys;
    NSString *_diy;
    NSString *_errcode;
    NSString *_jyb;
    NSString *_cardinfo;
    NSMutableString *_seekLoadTImes;
    NSMutableString *_natureLoadTImes;
    NSString *_videoSrcType;
    NSString *_playerType;
    NSString *_codeType;
    NSString *_preview;
    NSString *_switchL;
    NSString *_isdolby;
    NSString *_from_category_id;
    NSString *_album_ext_info;
    NSString *_grayV;
    NSString *_Sid;
    NSString *_irv;
    NSString *_mode;
    NSString *_half_ply_ppst;
    NSString *_isearphone;
    NSString *_isvr;
    NSString *_isfan;
    NSString *_uploaderid;
    NSString *_isrs;
    NSString *_vr_tm;
    NSString *_speed;
    NSString *_isonlyta;
    double _timeStamp;
    NSString *_createtime;
    NSString *_deviceid;
    NSString *_platform;
    NSString *_osversion;
    NSString *_ua;
    NSString *_passportid;
    NSString *_mkey;
    NSString *_version;
    NSString *_network;
}

@property(copy, nonatomic) NSString *network; // @synthesize network=_network;
@property(copy, nonatomic) NSString *version; // @synthesize version=_version;
@property(copy, nonatomic) NSString *mkey; // @synthesize mkey=_mkey;
@property(copy, nonatomic) NSString *passportid; // @synthesize passportid=_passportid;
@property(copy, nonatomic) NSString *ua; // @synthesize ua=_ua;
@property(copy, nonatomic) NSString *osversion; // @synthesize osversion=_osversion;
@property(copy, nonatomic) NSString *platform; // @synthesize platform=_platform;
@property(copy, nonatomic) NSString *deviceid; // @synthesize deviceid=_deviceid;
@property(copy, nonatomic) NSString *createtime; // @synthesize createtime=_createtime;
@property(nonatomic) int logStatus; // @synthesize logStatus=_logStatus;
@property(nonatomic) double timeStamp; // @synthesize timeStamp=_timeStamp;
@property(copy, nonatomic) NSString *isonlyta; // @synthesize isonlyta=_isonlyta;
@property(copy, nonatomic) NSString *speed; // @synthesize speed=_speed;
@property(copy, nonatomic) NSString *vr_tm; // @synthesize vr_tm=_vr_tm;
@property(copy, nonatomic) NSString *isrs; // @synthesize isrs=_isrs;
@property(copy, nonatomic) NSString *uploaderid; // @synthesize uploaderid=_uploaderid;
@property(copy, nonatomic) NSString *isfan; // @synthesize isfan=_isfan;
@property(copy, nonatomic) NSString *isvr; // @synthesize isvr=_isvr;
@property(copy, nonatomic) NSString *isearphone; // @synthesize isearphone=_isearphone;
@property(copy, nonatomic) NSString *half_ply_ppst; // @synthesize half_ply_ppst=_half_ply_ppst;
@property(copy, nonatomic) NSString *mode; // @synthesize mode=_mode;
@property(copy, nonatomic) NSString *irv; // @synthesize irv=_irv;
@property(copy, nonatomic) NSString *Sid; // @synthesize Sid=_Sid;
@property(copy, nonatomic) NSString *grayV; // @synthesize grayV=_grayV;
@property(copy, nonatomic) NSString *album_ext_info; // @synthesize album_ext_info=_album_ext_info;
@property(copy, nonatomic) NSString *from_category_id; // @synthesize from_category_id=_from_category_id;
@property(copy, nonatomic) NSString *isdolby; // @synthesize isdolby=_isdolby;
@property(copy, nonatomic) NSString *switchL; // @synthesize switchL=_switchL;
@property(copy, nonatomic) NSString *preview; // @synthesize preview=_preview;
@property(copy, nonatomic) NSString *codeType; // @synthesize codeType=_codeType;
@property(copy, nonatomic) NSString *playerType; // @synthesize playerType=_playerType;
@property(copy, nonatomic) NSString *videoSrcType; // @synthesize videoSrcType=_videoSrcType;
@property(copy, nonatomic) NSMutableString *natureLoadTImes; // @synthesize natureLoadTImes=_natureLoadTImes;
@property(copy, nonatomic) NSMutableString *seekLoadTImes; // @synthesize seekLoadTImes=_seekLoadTImes;
@property(copy, nonatomic) NSString *cardinfo; // @synthesize cardinfo=_cardinfo;
@property(copy, nonatomic) NSString *jyb; // @synthesize jyb=_jyb;
@property(copy, nonatomic) NSString *errcode; // @synthesize errcode=_errcode;
@property(copy, nonatomic) NSString *diy; // @synthesize diy=_diy;
@property(copy, nonatomic) NSString *ys; // @synthesize ys=_ys;
@property(copy, nonatomic) NSString *idfv; // @synthesize idfv=_idfv;
@property(copy, nonatomic) NSString *client_type; // @synthesize client_type=_client_type;
@property(copy, nonatomic) NSString *playtype; // @synthesize playtype=_playtype;
@property(copy, nonatomic) NSString *rpt; // @synthesize rpt=_rpt;
@property(copy, nonatomic) NSString *isFee; // @synthesize isFee=_isFee;
@property(copy, nonatomic) NSString *userType; // @synthesize userType=_userType;
@property(copy) NSString *isVip; // @synthesize isVip=_isVip;
@property(copy, nonatomic) NSString *phoneNumber; // @synthesize phoneNumber=_phoneNumber;
@property(copy, nonatomic) NSString *Paytype; // @synthesize Paytype=_Paytype;
@property(copy, nonatomic) NSString *resolution; // @synthesize resolution=_resolution;
@property(copy, nonatomic) NSString *albumid; // @synthesize albumid=_albumid;
@property(copy, nonatomic) NSString *response_code; // @synthesize response_code=_response_code;
@property(copy, nonatomic) NSString *gps; // @synthesize gps=_gps;
@property(copy, nonatomic) NSString *addr_loadtime; // @synthesize addr_loadtime=_addr_loadtime;
@property(copy, nonatomic) NSString *api_loadtime; // @synthesize api_loadtime=_api_loadtime;
@property(copy, nonatomic) NSString *isvv1; // @synthesize isvv1=_isvv1;
@property(copy, nonatomic) NSString *buffer_cnt; // @synthesize buffer_cnt=_buffer_cnt;
@property(copy, nonatomic) NSString *restype; // @synthesize restype=_restype;
@property(copy, nonatomic) NSString *playduration; // @synthesize playduration=_playduration;
@property(copy, nonatomic) NSString *isvideo3; // @synthesize isvideo3=_isvideo3;
@property(copy, nonatomic) NSString *loadtime; // @synthesize loadtime=_loadtime;
@property(copy, nonatomic) NSString *isvideo2; // @synthesize isvideo2=_isvideo2;
@property(copy, nonatomic) NSString *isvv2; // @synthesize isvv2=_isvv2;
@property(copy, nonatomic) NSString *adreqtime; // @synthesize adreqtime=_adreqtime;
@property(copy, nonatomic) NSString *isvideo1; // @synthesize isvideo1=_isvideo1;
@property(copy, nonatomic) NSString *leafcategoryid; // @synthesize leafcategoryid=_leafcategoryid;
@property(copy, nonatomic) NSString *categoryid; // @synthesize categoryid=_categoryid;
@property(copy, nonatomic) NSString *fromsubtype; // @synthesize fromsubtype=_fromsubtype;
@property(copy, nonatomic) NSString *fromtype; // @synthesize fromtype=_fromtype;
@property(copy, nonatomic) NSString *tvid; // @synthesize tvid=_tvid;
@property(copy, nonatomic) NSString *type; // @synthesize type=_type;
- (void).cxx_destruct;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)logFormated;
- (id)init;
- (void)dealloc;

@end

