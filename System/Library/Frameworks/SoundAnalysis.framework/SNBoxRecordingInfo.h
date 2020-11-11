/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:19:07 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/Frameworks/SoundAnalysis.framework/SoundAnalysis
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSString;

@interface SNBoxRecordingInfo : NSObject {

	NSString* _boxName;
	long long _busIndex;
	NSString* _fileName;

}

@property (retain) NSString * boxName;               //@synthesize boxName=_boxName - In the implementation block
@property (assign) long long busIndex;               //@synthesize busIndex=_busIndex - In the implementation block
@property (retain) NSString * fileName;              //@synthesize fileName=_fileName - In the implementation block
-(void)setFileName:(NSString *)arg1 ;
-(NSString *)fileName;
-(NSString *)boxName;
-(void)setBoxName:(NSString *)arg1 ;
-(long long)busIndex;
-(void)setBusIndex:(long long)arg1 ;
@end

