//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "JceObjectV2.h"

@class NSString, QZJFeedsCellLbs, QZJPhotoCategoryPhoto, QZJPhotoFaceShowInfo, QZJPhotoLabelShowInfo;

@interface QZJPhotoSummaryInfo : JceObjectV2
{
}

+ (id)jceType;
- (id)init;

// Remaining properties
@property(nonatomic, getter=jce_type, setter=setJce_type:) long long jcev2_p_0_o_type; // @dynamic jcev2_p_0_o_type;
@property(nonatomic, getter=jce_photo_num, setter=setJce_photo_num:) unsigned int jcev2_p_1_o_photo_num; // @dynamic jcev2_p_1_o_photo_num;
@property(retain, nonatomic, getter=jce_categoryid, setter=setJce_categoryid:) NSString *jcev2_p_2_o_categoryid; // @dynamic jcev2_p_2_o_categoryid;
@property(retain, nonatomic, getter=jce_url, setter=setJce_url:) NSString *jcev2_p_3_o_url; // @dynamic jcev2_p_3_o_url;
@property(retain, nonatomic, getter=jce_preview_elements, setter=setJce_preview_elements:) QZJPhotoCategoryPhoto *jcev2_p_4_o_preview_elements; // @dynamic jcev2_p_4_o_preview_elements;
@property(retain, nonatomic, getter=jce_face_show, setter=setJce_face_show:) QZJPhotoFaceShowInfo *jcev2_p_5_o_face_show; // @dynamic jcev2_p_5_o_face_show;
@property(retain, nonatomic, getter=jce_poi_info, setter=setJce_poi_info:) QZJFeedsCellLbs *jcev2_p_6_o_poi_info; // @dynamic jcev2_p_6_o_poi_info;
@property(retain, nonatomic, getter=jce_label_show, setter=setJce_label_show:) QZJPhotoLabelShowInfo *jcev2_p_7_o_label_show; // @dynamic jcev2_p_7_o_label_show;

@end
