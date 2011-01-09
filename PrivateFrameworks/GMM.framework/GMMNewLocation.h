/* Generated by RuntimeBrowser on iPhone OS 4.1
   Image: /System/Library/PrivateFrameworks/GMM.framework/GMM
 */

@class NSString, GMMGeometry;



@interface GMMNewLocation : PBCodable 
{
    NSString *_query;
    GMMGeometry *_geocode;
    NSString *_queryRefinementToken;
    BOOL _isVia;
    BOOL _hasIsVia;
}

@property(readonly) ? coordinate;
@property(readonly) BOOL hasQuery;
@property(readonly) BOOL hasGeocode;
@property(readonly) BOOL hasQueryRefinementToken;
@property(readonly) BOOL hasIsVia;
@property BOOL isVia;
@property(retain) NSString *queryRefinementToken;
@property(retain) GMMGeometry *geocode;
@property(retain) NSString *query;


- (BOOL)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
- (id)description;
- (id)query;
- (id)init;
- (void)dealloc;
- (void)setIsVia:(BOOL)arg1;
- (BOOL)hasIsVia;
- (BOOL)isVia;
- (void)setQueryRefinementToken:(id)arg1;
- (void)setGeocode:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)hasQuery;
- (BOOL)hasGeocode;
- (id)geocode;
- (BOOL)hasQueryRefinementToken;
- (id)queryRefinementToken;
- (void)setQuery:(id)arg1;
- (struct { double x1; double x2; })coordinate;
- (BOOL)isEqual:(id)arg1;

@end