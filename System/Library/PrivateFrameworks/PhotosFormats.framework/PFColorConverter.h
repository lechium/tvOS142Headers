/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:13:08 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosFormats.framework/PhotosFormats
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PhotosFormats/PhotosFormats-Structs.h>
#import <libobjc.A.dylib/PFAVReaderWriterAdjustDelegate.h>

@class PFAVReaderWriter, CIContext, NSString;

@interface PFColorConverter : NSObject <PFAVReaderWriterAdjustDelegate> {

	PFAVReaderWriter* _readerWriter;
	CIContext* _conversionContext;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)adjustPixelBuffer:(CVBufferRef)arg1 toOutputBuffer:(CVBufferRef)arg2 ;
-(void)convertWithVideoURL:(id)arg1 outURL:(id)arg2 progress:(/*^block*/id)arg3 completion:(/*^block*/id)arg4 ;
@end

