#pragma once
#include "CoreMinimal.h"
#include "HbkGimmick_Visibility.generated.h"

class UMeshComponent;

USTRUCT(BlueprintType)
struct HIBIKI_API FHbkGimmick_Visibility {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMeshComponent* pMeshComp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bShowNormal;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bShowCrack;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bShowBreak;
    
    FHbkGimmick_Visibility();
};

