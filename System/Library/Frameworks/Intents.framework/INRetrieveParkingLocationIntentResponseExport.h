/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:12:05 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/Frameworks/Intents.framework/Intents
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

@class CLPlacemark, NSString;


@protocol INRetrieveParkingLocationIntentResponseExport <NSObject,JSExport>
@property (nonatomic,readonly) long long code; 
@property (nonatomic,copy) CLPlacemark * parkingLocation; 
@property (nonatomic,copy) NSString * parkingNote; 
@required
-(long long)code;
-(CLPlacemark *)parkingLocation;
-(void)setParkingLocation:(id)arg1;
-(NSString *)parkingNote;
-(void)setParkingNote:(id)arg1;

@end

