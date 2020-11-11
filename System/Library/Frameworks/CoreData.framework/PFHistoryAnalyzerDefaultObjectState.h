/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:10:31 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/PFHistoryAnalyzerObjectState.h>

@class NSManagedObjectID, NSNumber, NSDictionary, NSString;

@interface PFHistoryAnalyzerDefaultObjectState : NSObject <PFHistoryAnalyzerObjectState> {

	NSManagedObjectID* _analyzedObjectID;
	NSNumber* _originalTransactionNumber;
	long long _originalChangeType;
	NSNumber* _finalTransactionNumber;
	long long _finalChangeType;
	NSDictionary* _tombstone;
	NSString* _finalChangeAuthor;

}

@property (nonatomic,readonly) NSManagedObjectID * analyzedObjectID;              //@synthesize analyzedObjectID=_analyzedObjectID - In the implementation block
@property (nonatomic,readonly) NSNumber * originalTransactionNumber;              //@synthesize originalTransactionNumber=_originalTransactionNumber - In the implementation block
@property (nonatomic,readonly) long long originalChangeType;                      //@synthesize originalChangeType=_originalChangeType - In the implementation block
@property (nonatomic,readonly) NSNumber * finalTransactionNumber;                 //@synthesize finalTransactionNumber=_finalTransactionNumber - In the implementation block
@property (nonatomic,readonly) long long finalChangeType;                         //@synthesize finalChangeType=_finalChangeType - In the implementation block
@property (nonatomic,readonly) NSDictionary * tombstone;                          //@synthesize tombstone=_tombstone - In the implementation block
@property (nonatomic,readonly) NSString * finalChangeAuthor;                      //@synthesize finalChangeAuthor=_finalChangeAuthor - In the implementation block
-(id)description;
-(void)dealloc;
-(NSDictionary *)tombstone;
-(void)updateWithChange:(id)arg1 ;
-(NSManagedObjectID *)analyzedObjectID;
-(NSNumber *)originalTransactionNumber;
-(long long)originalChangeType;
-(NSNumber *)finalTransactionNumber;
-(long long)finalChangeType;
-(NSString *)finalChangeAuthor;
-(id)initWithOriginalChange:(id)arg1 ;
@end

