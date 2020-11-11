/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:21:10 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <RelevanceEngine/RelevanceEngine-Structs.h>
@interface RETransformerInvocation : NSObject {

	vector<unsigned long, std::__1::allocator<unsigned long> >* _values;

}

@property (nonatomic,readonly) unsigned long long numberOfArguments; 
+(id)invocationWithArguments:(unsigned long long*)arg1 count:(unsigned long long)arg2 ;
-(id)init;
-(void)dealloc;
-(unsigned long long)numberOfArguments;
-(void)setArgument:(unsigned long long)arg1 atIndex:(unsigned long long)arg2 ;
-(unsigned long long)getArgumentAtIndex:(unsigned long long)arg1 ;
@end
