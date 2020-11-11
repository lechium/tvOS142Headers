/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:18:14 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSString;

@interface HMDCameraClipImportVideoSegmentMetadata : NSObject {

	BOOL _header;
	NSString* _resourcePath;
	double _duration;

}

@property (copy,readonly) NSString * resourcePath;              //@synthesize resourcePath=_resourcePath - In the implementation block
@property (getter=isHeader,readonly) BOOL header;               //@synthesize header=_header - In the implementation block
@property (readonly) double duration;                           //@synthesize duration=_duration - In the implementation block
-(NSString *)resourcePath;
-(double)duration;
-(BOOL)isHeader;
-(id)initWithVideoSegmentMetadata:(id)arg1 ;
@end

