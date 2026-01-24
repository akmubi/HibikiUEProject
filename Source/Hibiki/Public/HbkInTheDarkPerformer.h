#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "EHbkInTheDarkRole.h"
#include "HbkInTheDarkPerformer.generated.h"

class AHbkCharacter;
class AHbkEm5000_Spotlight;

USTRUCT(BlueprintType)
struct FHbkInTheDarkPerformer {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<AHbkCharacter> Actor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EHbkInTheDarkRole Role;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<AHbkEm5000_Spotlight> SpotLight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector StandingPosition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector WaitingPosition;
    
    HIBIKI_API FHbkInTheDarkPerformer();
};

