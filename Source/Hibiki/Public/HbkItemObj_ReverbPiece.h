#pragma once
#include "CoreMinimal.h"
#include "HbkItemObject.h"
#include "HbkItemObj_ReverbPiece.generated.h"

UCLASS(Blueprintable)
class HIBIKI_API UHbkItemObj_ReverbPiece : public UHbkItemObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 PieceAmount;
    
    UHbkItemObj_ReverbPiece();

};

