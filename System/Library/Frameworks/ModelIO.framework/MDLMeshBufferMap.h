/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:12:40 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/Frameworks/ModelIO.framework/ModelIO
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@interface MDLMeshBufferMap : NSObject {

	/*^block*/id _deallocator;
	void* _bytes;

}

@property (nonatomic,readonly) void* bytes;              //@synthesize bytes=_bytes - In the implementation block
-(void)dealloc;
-(void*)bytes;
-(id)initWithBytes:(void*)arg1 deallocator:(/*^block*/id)arg2 ;
@end

