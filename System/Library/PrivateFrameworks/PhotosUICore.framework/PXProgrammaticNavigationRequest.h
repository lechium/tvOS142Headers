/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:15:34 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class PXProgrammaticNavigationDestination;

@interface PXProgrammaticNavigationRequest : NSObject {

	PXProgrammaticNavigationDestination* _destination;
	unsigned long long _options;
	/*^block*/id _completionHandler;

}

@property (nonatomic,readonly) PXProgrammaticNavigationDestination * destination;              //@synthesize destination=_destination - In the implementation block
@property (nonatomic,readonly) unsigned long long options;                                     //@synthesize options=_options - In the implementation block
@property (nonatomic,copy,readonly) id completionHandler;                                      //@synthesize completionHandler=_completionHandler - In the implementation block
-(id)description;
-(id)init;
-(void)cancel;
-(unsigned long long)options;
-(PXProgrammaticNavigationDestination *)destination;
-(id)completionHandler;
-(id)initWithDestination:(id)arg1 options:(unsigned long long)arg2 completionHandler:(/*^block*/id)arg3 ;
@end
