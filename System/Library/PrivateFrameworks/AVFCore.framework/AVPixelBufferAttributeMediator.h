/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:19:30 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/AVFCore.framework/AVFCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <AVFCore/AVFCore-Structs.h>
@interface AVPixelBufferAttributeMediator : NSObject {

	OpaqueVTPixelBufferAttributesMediatorRef _mediator;

}
-(id)init;
-(void)dealloc;
-(void)removeRequestedPixelBufferAttributesAttributesForKey:(id)arg1 ;
-(void)setRequestedPixelBufferAttributes:(id)arg1 forKey:(id)arg2 ;
-(void)setLayersAreSuppressed:(BOOL)arg1 ;
-(id)mediatedPixelBufferAttributes;
@end

