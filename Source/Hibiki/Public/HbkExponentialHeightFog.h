#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "GameFramework/Info.h"
#include "HbkExponentialHeightFog.generated.h"

class UExponentialHeightFogComponent;

UCLASS(Blueprintable)
class AHbkExponentialHeightFog : public AInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UExponentialHeightFogComponent* ComponentNotUsed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDataTableRowHandle DefaultTableRowHandle;
    
    AHbkExponentialHeightFog(const FObjectInitializer& ObjectInitializer);

};

