/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:18:47 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /usr/lib/libcoreroutine.dylib
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSDate, NSNumber;

@interface RTVisitDecoded : NSObject {

	double _logProbability;
	NSDate* _entryDate;
	NSDate* _exitDate;

}

@property (assign,nonatomic) double logProbability;                //@synthesize logProbability=_logProbability - In the implementation block
@property (nonatomic,retain) NSDate * entryDate;                   //@synthesize entryDate=_entryDate - In the implementation block
@property (nonatomic,retain) NSDate * exitDate;                    //@synthesize exitDate=_exitDate - In the implementation block
@property (nonatomic,readonly) NSNumber * outputType; 
-(id)description;
-(id)init;
-(NSNumber *)outputType;
-(NSDate *)entryDate;
-(NSDate *)exitDate;
-(void)setEntryDate:(NSDate *)arg1 ;
-(void)setExitDate:(NSDate *)arg1 ;
-(double)logProbability;
-(BOOL)noVisit;
-(id)initWithEntryDate:(id)arg1 exitDate:(id)arg2 logProbability:(double)arg3 ;
-(BOOL)partialVisit;
-(BOOL)completeVisit;
-(void)setLogProbability:(double)arg1 ;
@end
