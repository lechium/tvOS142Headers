/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:20:39 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/MediaConversionService.framework/MediaConversionService
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <MediaConversionService/PHMediaFormatConversionCompositeRequest.h>

@class PHMediaFormatLivePhotoConversionRequest;

@interface PHMediaFormatLivePhotoBundleConversionRequest : PHMediaFormatConversionCompositeRequest {

	PHMediaFormatLivePhotoConversionRequest* _livePhotoConversionRequest;

}

@property (retain) PHMediaFormatLivePhotoConversionRequest * livePhotoConversionRequest;              //@synthesize livePhotoConversionRequest=_livePhotoConversionRequest - In the implementation block
-(BOOL)prepareWithError:(id*)arg1 ;
-(void)enqueueSubrequestsOnConversionManager:(id)arg1 ;
-(void)enumerateSubrequests:(/*^block*/id)arg1 ;
-(void)postProcessSuccessfulCompositeRequest;
-(PHMediaFormatLivePhotoConversionRequest *)livePhotoConversionRequest;
-(void)setLivePhotoConversionRequest:(PHMediaFormatLivePhotoConversionRequest *)arg1 ;
@end

