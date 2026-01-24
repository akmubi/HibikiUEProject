#pragma once
#include "CoreMinimal.h"
#include "DataProviders/AIDataProvider.h"
#include "EnvironmentQuery/EnvQueryContext.h"
#include "HbkEnvQueryContext_NavEdge.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class HIBIKI_API UHbkEnvQueryContext_NavEdge : public UEnvQueryContext {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FAIDataProviderFloatValue MinEdgeLength;
    
    UHbkEnvQueryContext_NavEdge();

};

