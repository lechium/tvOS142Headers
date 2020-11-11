/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:13:36 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/Montreal.framework/Montreal
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <Montreal/Montreal-Structs.h>
@class MontrealNNModelNetwork, NSMutableDictionary;

@interface MontrealNNGenerateModel : NSObject {

	MontrealNeuralNetworkRef _nnObject;
	unsigned long long _weightFormat;
	MontrealNNModelNetwork* _network;
	NSMutableDictionary* _inputs;
	NSMutableDictionary* _outputs;

}

@property (readonly) unsigned long long weightFormat;               //@synthesize weightFormat=_weightFormat - In the implementation block
@property (readonly) MontrealNNModelNetwork * network;              //@synthesize network=_network - In the implementation block
@property (assign) MontrealNeuralNetworkRef nnObject;               //@synthesize nnObject=_nnObject - In the implementation block
@property (readonly) NSMutableDictionary * inputs;                  //@synthesize inputs=_inputs - In the implementation block
@property (readonly) NSMutableDictionary * outputs;                 //@synthesize outputs=_outputs - In the implementation block
-(void)dealloc;
-(MontrealNNModelNetwork *)network;
-(NSMutableDictionary *)outputs;
-(NSMutableDictionary *)inputs;
-(void)merge:(id)arg1 ;
-(void)removeOutput:(id)arg1 ;
-(void*)generateModelContainer;
-(unsigned long long)weightFormat;
-(id)networkInputs;
-(id)networkOutputs;
-(id)modelContainerPath;
-(id)initWithWeightFormat:(unsigned long long)arg1 ;
-(void)setNnObject:(MontrealNeuralNetworkRef)arg1 ;
-(MontrealNeuralNetworkRef)nnObject;
-(void)addInputs:(id)arg1 ;
-(void)removeInput:(id)arg1 ;
-(void)addOutputs:(id)arg1 ;
@end

