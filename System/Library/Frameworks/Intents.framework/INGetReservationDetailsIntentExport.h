/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:12:04 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/Frameworks/Intents.framework/Intents
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

@class INSpeakableString, NSArray;


@protocol INGetReservationDetailsIntentExport <NSObject,JSExport>
@property (nonatomic,copy) INSpeakableString * reservationContainerReference; 
@property (nonatomic,copy) NSArray * reservationItemReferences; 
@required
-(id)init;
-(INSpeakableString *)reservationContainerReference;
-(void)setReservationContainerReference:(id)arg1;
-(NSArray *)reservationItemReferences;
-(void)setReservationItemReferences:(id)arg1;

@end

