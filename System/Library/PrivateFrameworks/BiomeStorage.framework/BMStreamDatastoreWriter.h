/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:19:58 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/BiomeStorage.framework/BiomeStorage
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class BMStreamDatastore;

@interface BMStreamDatastoreWriter : NSObject {

	BMStreamDatastore* _inner;

}
-(void)dealloc;
-(BOOL)writeEventWithEventBody:(id)arg1 timestamp:(double)arg2 ;
-(void)syncMappedFiles;
-(BOOL)writeEventWithEventBody:(id)arg1 ;
-(id)initWithStream:(id)arg1 config:(id)arg2 ;
-(id)streamIdentifier;
@end
