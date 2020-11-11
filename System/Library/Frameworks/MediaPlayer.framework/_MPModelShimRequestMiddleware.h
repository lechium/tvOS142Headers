/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:14:29 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/MPMiddleware.h>

@class NSArray, MPModelResponse, NSString;

@interface _MPModelShimRequestMiddleware : NSObject <MPMiddleware> {

	NSArray* _invalidationObservers;
	MPModelResponse* _modelResponse;

}

@property (nonatomic,retain) MPModelResponse * modelResponse;              //@synthesize modelResponse=_modelResponse - In the implementation block
@property (nonatomic,retain) NSArray * invalidationObservers;              //@synthesize invalidationObservers=_invalidationObservers - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSArray *)invalidationObservers;
-(void)setModelResponse:(MPModelResponse *)arg1 ;
-(id)operationsForRequest:(id)arg1 ;
-(void)setInvalidationObservers:(NSArray *)arg1 ;
-(MPModelResponse *)modelResponse;
@end

