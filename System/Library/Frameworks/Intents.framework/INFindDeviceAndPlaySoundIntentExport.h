/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:12:05 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/Frameworks/Intents.framework/Intents
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

@class NSArray, NSNumber;


@protocol INFindDeviceAndPlaySoundIntentExport <NSObject,JSExport>
@property (nonatomic,copy) NSArray * devices; 
@property (nonatomic,copy) NSNumber * isStopRequest; 
@required
-(id)init;
-(NSArray *)devices;
-(void)setDevices:(id)arg1;
-(NSNumber *)isStopRequest;
-(void)setIsStopRequest:(id)arg1;

@end
