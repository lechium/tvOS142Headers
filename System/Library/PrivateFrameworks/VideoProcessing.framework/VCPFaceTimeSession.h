/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:16:13 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/VideoProcessing.framework/VideoProcessing
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSMutableArray, NSString, NSDate, NSArray;

@interface VCPFaceTimeSession : NSObject {

	NSMutableArray* _faces;
	NSString* _sessionID;
	NSString* _callerID;
	NSDate* _date;

}

@property (nonatomic,retain) NSString * sessionID;              //@synthesize sessionID=_sessionID - In the implementation block
@property (nonatomic,retain) NSString * callerID;               //@synthesize callerID=_callerID - In the implementation block
@property (nonatomic,retain) NSDate * date;                     //@synthesize date=_date - In the implementation block
@property (nonatomic,readonly) NSArray * faces; 
+(id)session;
+(id)sessionFromManagedObject:(id)arg1 ;
+(id)createWithSessionID:(id)arg1 callerID:(id)arg2 andDate:(id)arg3 ;
-(id)description;
-(NSDate *)date;
-(NSString *)sessionID;
-(void)setSessionID:(NSString *)arg1 ;
-(void)setDate:(NSDate *)arg1 ;
-(void)addFace:(id)arg1 ;
-(NSArray *)faces;
-(NSString *)callerID;
-(void)setCallerID:(NSString *)arg1 ;
-(id)managedObjectForContext:(id)arg1 ;
-(id)initWithSessionID:(id)arg1 callerID:(id)arg2 andDate:(id)arg3 ;
@end

