/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:12:33 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/MediaServices.framework/MediaServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

@class NSData;


@protocol MSVSegmentedSubEncoder <NSObject>
@property (nonatomic,readonly) BOOL hasTopLevelData; 
@property (readonly) NSData * encodedData; 
@required
-(NSData *)encodedData;
-(void)finishEncodingPartialTopLevelObject;
-(void)beginEncodingPartialTopLevelObject:(id)arg1;
-(BOOL)hasTopLevelData;

@end

