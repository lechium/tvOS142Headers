/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:15:47 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/PersonalizationPortrait.framework/PersonalizationPortrait
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PersonalizationPortrait/PPRecordLoadingDelegate.h>

@interface PPNamedEntityRecordLoadingDelegate : PPRecordLoadingDelegate {

	/*^block*/id _namedEntityRecordsSetup;
	/*^block*/id _namedEntityRecordsHandler;
	/*^block*/id _namedEntityRecordsCompletion;
	/*^block*/id _recentNamedEntityRecordsSetup;
	/*^block*/id _recentNamedEntityRecordsHandler;
	/*^block*/id _recentNamedEntityRecordsCompletion;
	/*^block*/id _resetNamedEntityRecordData;

}

@property (nonatomic,copy) id namedEntityRecordsSetup;                         //@synthesize namedEntityRecordsSetup=_namedEntityRecordsSetup - In the implementation block
@property (nonatomic,copy) id namedEntityRecordsHandler;                       //@synthesize namedEntityRecordsHandler=_namedEntityRecordsHandler - In the implementation block
@property (nonatomic,copy) id namedEntityRecordsCompletion;                    //@synthesize namedEntityRecordsCompletion=_namedEntityRecordsCompletion - In the implementation block
@property (nonatomic,copy) id recentNamedEntityRecordsSetup;                   //@synthesize recentNamedEntityRecordsSetup=_recentNamedEntityRecordsSetup - In the implementation block
@property (nonatomic,copy) id recentNamedEntityRecordsHandler;                 //@synthesize recentNamedEntityRecordsHandler=_recentNamedEntityRecordsHandler - In the implementation block
@property (nonatomic,copy) id recentNamedEntityRecordsCompletion;              //@synthesize recentNamedEntityRecordsCompletion=_recentNamedEntityRecordsCompletion - In the implementation block
@property (nonatomic,copy) id resetNamedEntityRecordData;                      //@synthesize resetNamedEntityRecordData=_resetNamedEntityRecordData - In the implementation block
-(id)description;
-(id)initWithName:(id)arg1 ;
-(unsigned char)recordLoadingSetup;
-(unsigned char)recordLoadingHandler:(id)arg1 ;
-(void)recordLoadingCompletion;
-(unsigned char)recentRecordLoadingSetup;
-(unsigned char)recentRecordLoadingHandler:(id)arg1 ;
-(void)recentRecordLoadingCompletion;
-(void)resetRecordData;
-(id)namedEntityRecordsSetup;
-(void)setNamedEntityRecordsSetup:(id)arg1 ;
-(id)namedEntityRecordsHandler;
-(void)setNamedEntityRecordsHandler:(id)arg1 ;
-(id)namedEntityRecordsCompletion;
-(void)setNamedEntityRecordsCompletion:(id)arg1 ;
-(id)recentNamedEntityRecordsSetup;
-(void)setRecentNamedEntityRecordsSetup:(id)arg1 ;
-(id)recentNamedEntityRecordsHandler;
-(void)setRecentNamedEntityRecordsHandler:(id)arg1 ;
-(id)recentNamedEntityRecordsCompletion;
-(void)setRecentNamedEntityRecordsCompletion:(id)arg1 ;
-(id)resetNamedEntityRecordData;
-(void)setResetNamedEntityRecordData:(id)arg1 ;
@end

