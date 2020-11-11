/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:16:21 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <AVConference/AVConference-Structs.h>
#import <AVConference/VCObject.h>

@interface VCPixelBufferOverlay : VCObject {

	CGContextRef _bitmapContext;
	CFDictionaryRef _stringAttributes;
	CTLineRef _ellipsisToken;

}
-(void)dealloc;
-(void)drawOverlayMessage:(id)arg1 onPixelBuffer:(CVBufferRef)arg2 attributes:(CFDictionaryRef)arg3 ;
-(void)setupStringAttributes:(double)arg1 height:(double)arg2 ;
-(id)reverseString:(id)arg1 ;
@end

