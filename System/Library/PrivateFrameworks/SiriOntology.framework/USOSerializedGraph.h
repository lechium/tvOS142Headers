/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:21:28 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/SiriOntology.framework/SiriOntology
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <SiriOntology/SiriOntology-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSArray;

@interface USOSerializedGraph : NSObject <NSSecureCoding> {

	NSString* _printedForm;
	NSArray* _nodes;
	NSArray* _edges;

}

@property (nonatomic,retain) NSString * printedForm;              //@synthesize printedForm=_printedForm - In the implementation block
@property (nonatomic,retain) NSArray * nodes;                     //@synthesize nodes=_nodes - In the implementation block
@property (nonatomic,retain) NSArray * edges;                     //@synthesize edges=_edges - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSArray *)nodes;
-(void)setNodes:(NSArray *)arg1 ;
-(NSArray *)edges;
-(void)setEdges:(NSArray *)arg1 ;
-(NSString *)printedForm;
-(unique_ptr<siri::ontology::UsoGraph, std::__1::default_delete<siri::ontology::UsoGraph> >*)toCppUsoGraph:(shared_ptr<siri::ontology::UsoVocabManager>*)arg1 withError:(id*)arg2 ;
-(id)initWithUsoGraph:(UsoGraph*)arg1 withError:(id*)arg2 ;
-(id)createSerializedNode:(const UsoGraphNode*)arg1 withError:(id*)arg2 ;
-(const OntologyNodeName*)getOrCreateNodeName:(id)arg1 withVocabManager:(shared_ptr<siri::ontology::UsoVocabManager>*)arg2 withError:(id*)arg3 ;
-(const OntologyVerbName*)getOrCreateVerbName:(id)arg1 withVocabManager:(shared_ptr<siri::ontology::UsoVocabManager>*)arg2 withError:(id*)arg3 ;
-(const OntologyEdgeName*)getOrCreateEdgeName:(id)arg1 withVocabManager:(shared_ptr<siri::ontology::UsoVocabManager>*)arg2 withError:(id*)arg3 ;
-(id)initWithNodes:(id)arg1 edges:(id)arg2 ;
-(void)setPrintedForm:(NSString *)arg1 ;
-(id)getDebugGraphString;
-(id)getDebugGraphStringSiriNl;
@end

