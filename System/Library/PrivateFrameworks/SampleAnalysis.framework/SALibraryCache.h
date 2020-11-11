/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:21:16 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/SampleAnalysis.framework/SampleAnalysis
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

@class NSUUID, NSArray;


@protocol SALibraryCache <NSObject>
@property (readonly) NSUUID * uuid; 
@property (readonly) NSArray * binaryLoadInfos; 
@property (readonly) unsigned long long startAddress; 
@property (readonly) unsigned long long endAddress; 
@property (readonly) unsigned long long textSegmentsStartAddress; 
@property (readonly) unsigned long long textSegmentsEndAddress; 
@required
-(NSUUID *)uuid;
-(unsigned long long)startAddress;
-(unsigned long long)endAddress;
-(NSArray *)binaryLoadInfos;
-(unsigned long long)textSegmentsStartAddress;
-(unsigned long long)textSegmentsEndAddress;

@end

