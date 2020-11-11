/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:21:41 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/TVCoreSettings.framework/TVCoreSettings
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

@class NSString, WFHotspotDetails;


@protocol WFNetworkCell <NSObject>
@property (nonatomic,copy) NSString * title; 
@property (nonatomic,copy) NSString * subtitle; 
@property (assign,nonatomic) BOOL secure; 
@property (assign,nonatomic) long long state; 
@property (assign,nonatomic) unsigned long long bars; 
@property (assign,nonatomic) BOOL personalHotspot; 
@property (nonatomic,retain) WFHotspotDetails * hotspotDetails; 
@property (assign,nonatomic) BOOL connectionError; 
@required
-(long long)state;
-(void)setState:(long long)arg1;
-(void)setSecure:(BOOL)arg1;
-(BOOL)secure;
-(unsigned long long)bars;
-(NSString *)title;
-(void)setTitle:(id)arg1;
-(void)setSubtitle:(id)arg1;
-(NSString *)subtitle;
-(void)setBars:(unsigned long long)arg1;
-(BOOL)connectionError;
-(void)setConnectionError:(BOOL)arg1;
-(void)setPersonalHotspot:(BOOL)arg1;
-(WFHotspotDetails *)hotspotDetails;
-(void)setHotspotDetails:(id)arg1;
-(BOOL)personalHotspot;

@end

